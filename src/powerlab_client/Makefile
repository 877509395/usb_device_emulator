all:
	powerlab_sync
	sshpass -p ${WIN_PASSWORD} ssh ${WIN_USER}@${WIN_IP} C:\\Users\\${WIN_USER}\\Desktop\\powerlab_client\\build.bat

install: FORCE
	sshpass -p ${WIN_PASSWORD} scp -T ${WIN_USER}@${WIN_IP}:C:\\Users\\${WIN_USER}\\Desktop\\powerlab_client\\test.bat ${rel_dir}
	sshpass -p ${WIN_PASSWORD} scp -T ${WIN_USER}@${WIN_IP}:C:\\Users\\${WIN_USER}\\Desktop\\powerlab_client\\PowerLabClient.exe ${rel_dir}

clean: FORCE

FORCE:
