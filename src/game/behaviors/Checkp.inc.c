

void bhv_checkp(void){

   // o->oPosY += 0.01f;
    if(cur_obj_is_mario_on_platform()){
        gMarioState->warpID = o->oBehParams2ndByte;
    }
}