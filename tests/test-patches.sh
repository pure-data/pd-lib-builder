#!/bin/sh

## simple script to open patches via Pd, and check for errors
## - each patch is opened separately
## - if an error is encountered, the Pd-printout is displayed
##   (else it is suppressed)
## - if any of the patches encountered an error, the script will
##   exit with a non-0 code

if [ "x${PD}" = "x" ]; then
  if [ "x${PDBINDIR}" != "x" ]; then
    for exe in pd.com pd pd.exe; do
      if [ -x "${PDBINDIR}/${exe}" ]; then
         PD="${PDBINDIR}/${exe}"
         break
      fi
    done
    if [ "x${PD}" = "x" ]; then
      echo "WARNING: couldn't find a usable Pd in '${PDBINDIR}'" 1>&2
    fi
  fi
fi
if [ "x${PD}" = "x" ]; then
  PD=pd
fi
echo "using Pd: ${PD}"

failed=0
failed_tests=""
succeeded=0

open1patch() {
  logfile=$(mktemp)
  local patch=$1
  local patchdir=${patch%%/*}
  local patchfile=${patch#*/}
  patchfile=${patchfile#/}
  #echo "INFO: running ${patchfile} in ${patchdir}"
  cd "${patchdir}" && \
  ${PD} -batch -nrt -noprefs -nostdpath -open "${patchfile}" -send "pd quit" \
	>"${logfile}" 2>&1
  ret=$?
  if grep "error: ... couldn't create" "${logfile}" >/dev/null; then
    ret=1
  fi
  if [ "x${ret}" != "x0" ]; then
    echo ""
    cat "${logfile}"
    echo "FAILED[$ret]: ${patch}"
  else
    echo "SUCCEEDED: ${patch}"
  fi
  rm "${logfile}"
  return $ret
}

for p in "${@}"; do
  if (open1patch "${p}"); then
    succeeded=$((succeeded+1))
  else
    failed=$((failed+1))
    failed_tests="${failed_tests} ${p}"
  fi
done

echo ""
echo "SUCCESS: ${succeeded}"
echo "FAILURE: ${failed}"
test ${failed} -eq 0 || echo "FAILS  :${failed_tests}"
test ${failed} -eq 0
