const int 	SKY_FRONT=0,
			SKY_RIGHT=1,
			SKY_LEFT=2,
			SKY_BACK=3,
			SKY_UP=4,
			SKY_DOWN=5,
			GWHEEL_RING=3,
			GWHEEL_TROLLEY=4, 
			GWHEEL_TOP=5;
		
int 	move=1;
		gwheel_ring_color=0, 
		gwheel_trolley_color=0,
		fog=0, up=1,camw=0,cam=1;

GLint 	skybox[6], 
		floor_park,
		x_r=93;

GLfloat viewer[3] = {1.0f, 0.0f, 0.0f},
		camera[3] = {0.0f, 0.0, 0.0};

GLdouble 	c_angle=90.0,
			gw_spin = 0.0,//Girar roda gigante
			cup_spin = 0.0,//Girar xicaras
			tower_up_down = 0.0, // Subir descer brinquedo tower
			gw_width = 8.0, 
			gw_x=-180.0, 
			gw_y=50.0, 
			gw_z=220.0,
			co_x=180.0, 
			co_y=0.0, 
			co_z=80.0,
			movcord[3]={0,-10,-520};
			

Mix_Music *theme = NULL;
