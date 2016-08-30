
/*

  Note - does not appear to like DPSESSION_MULTICASTSERVER very much!

  */

#include "std.h"
#include "multiplay.h"
#include "multiplay_setup.h"

#define NO_MULTIPLAYER
#define THROW_MULTIPLAYER_ERROR RTEX("Multiplayer is not enabled in this build.")


void multiplay_link( void(*rtSym)(const char*,void*) ){
	rtSym( "%StartNetGame",bbStartNetGame );
	rtSym( "%HostNetGame$game_name",bbHostNetGame );
	rtSym( "%JoinNetGame$game_name$ip_address",bbJoinNetGame );
	rtSym( "StopNetGame",bbStopNetGame );

	rtSym( "%CreateNetPlayer$name",bbCreateNetPlayer );
	rtSym( "DeleteNetPlayer%player",bbDeleteNetPlayer );
	rtSym( "$NetPlayerName%player",bbNetPlayerName );
	rtSym( "%NetPlayerLocal%player",bbNetPlayerLocal );

	rtSym( "%SendNetMsg%type$msg%from_player%to_player=0%reliable=1",bbSendNetMsg );

	rtSym( "%RecvNetMsg",bbRecvNetMsg );
	rtSym( "%NetMsgType",bbNetMsgType );
	rtSym( "%NetMsgFrom",bbNetMsgFrom );
	rtSym( "%NetMsgTo",bbNetMsgTo );
	rtSym( "$NetMsgData",bbNetMsgData );
}

bool multiplay_create(){
	return true;
}

bool multiplay_destroy(){
	return true;
}

static int startGame( int n ){
	return 0;
}

int bbStartNetGame(){
	THROW_MULTIPLAYER_ERROR;
	return 0;
}

int bbHostNetGame( BBStr *name ){
	THROW_MULTIPLAYER_ERROR;
	return 0;
}

int bbJoinNetGame( BBStr *name,BBStr *address ){
	THROW_MULTIPLAYER_ERROR;
	return 0;
}

void bbStopNetGame(){
	THROW_MULTIPLAYER_ERROR;
}

DPID bbCreateNetPlayer( BBStr *nm ){
	THROW_MULTIPLAYER_ERROR;
	return (DPID)0;
}

void bbDeleteNetPlayer( DPID player ){
	THROW_MULTIPLAYER_ERROR;
}

BBStr *bbNetPlayerName( DPID player ){
	THROW_MULTIPLAYER_ERROR;
	return d_new BBStr( "" );
}

int bbNetPlayerLocal( DPID player ){
	THROW_MULTIPLAYER_ERROR;
	return 0;
}

int bbRecvNetMsg(){
	THROW_MULTIPLAYER_ERROR;
	return 0;
}

int bbNetMsgType(){
	THROW_MULTIPLAYER_ERROR;
	return 0;
}

BBStr *bbNetMsgData(){
	THROW_MULTIPLAYER_ERROR;
	return d_new BBStr( "" );
}

DPID bbNetMsgFrom(){
	THROW_MULTIPLAYER_ERROR;
	return (DPID)0;
}

DPID bbNetMsgTo(){
	THROW_MULTIPLAYER_ERROR;
	return (DPID)0;
}

int bbSendNetMsg( int type,BBStr *msg,DPID from,DPID to,int reliable ){
	THROW_MULTIPLAYER_ERROR;
	return 0;
}
