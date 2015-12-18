cd main
g++ -DDEBUG  main.c -I .. -static  -L ../out/Debug/obj/third_party/libevent/  -levent -L ../out/Debug/obj/ipc/ -lipc  -lglib-2.0 -lpthread -L../out/Debug/obj/base/ -lbase -lbase_static
cd ..
