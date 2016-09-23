class cfgPatches
{
	class Zab_splendid_smoke
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F"};
		author[] = {"[W] Zabuza"};
	};
};

class cfgCloudlets
{
	class Default;
	class SmokeShellWhite : Default
	{
		moveVelocity[]={0.2,0.50000001,0.1};//{0.2,0.1,0.1}
		size[]={0.46,4.5,18};//{0.1,2,6}
		MoveVelocityVar[]={0.7,0.4,0.7};//{0.25,0.25,0.25}
	};
};