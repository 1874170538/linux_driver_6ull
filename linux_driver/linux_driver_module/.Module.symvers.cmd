cmd_/home/unitree/Go2/code/demoTest/linux_driver/linux_driver_module/Module.symvers := sed 's/\.ko$$/\.o/' /home/unitree/Go2/code/demoTest/linux_driver/linux_driver_module/modules.order | scripts/mod/modpost -m -a  -o /home/unitree/Go2/code/demoTest/linux_driver/linux_driver_module/Module.symvers -e -i Module.symvers   -T -
