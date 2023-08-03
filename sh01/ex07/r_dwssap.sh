cat /etc/passwd | grep -v '^#' | sed -n 2~2p | sed 's/:.*//' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed -z 's/\n/, /g' | sed 's/,.$/\.\n/' | tr -d '\n'
