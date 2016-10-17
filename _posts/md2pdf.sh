#/bin/sh
echo ${1};
gimli -w '--toc --footer-right "[page]/[toPage]"' -cover cover-file.md -f ${1}
