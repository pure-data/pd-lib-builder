#!/bin/sh

template=_template_
template_dir=${0%/*}/${template}

outdir=$1
outdir=${outdir%/}
outname=${outdir##*/}


usage() {
    cat 1>&2 <<EOL
usage: $0 <outdir>
  creates a new test-directory <outdir> from _template_;
  <outdir> must not exist yet.
EOL
  if [ "x$@" != "x" ]; then
    echo
    echo "  $@" 1>&2
  fi
  exit 1
}

if [ "x${outdir}" = "x" ]; then
  usage
fi

if [ -d "${outdir}" ]; then
  usage "output directory '${outdir}' already exists!"
fi

if [ ! -d "${template_dir}" ]; then
  echo "unable to find '${template_dir}'" 1>&2
  exit 1
fi

mkdir -p "${outdir}" || usage "unable to create '${outdir}'!"
rmdir "${outdir}"
cp -r "${template_dir}" "${outdir}"
find "${outdir}" -type f -exec sed -e "s|${template}|${outname}|g" -i {} +
for f in "${outdir}"/*; do
 g=$(echo $f | sed -e "s|${template}|${outname}|g")
 if [ "x${f}" != "x${g}" ]; then
   mv "${f}" "${g}"
 fi
done
