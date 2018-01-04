#include "ScriptDataEngine.h"

namespace sofa
{

namespace component
{

namespace controller
{

void ScriptDataEngine::parse(sofa::core::objectmodel::BaseObjectDescription *arg)
{
    DataEngine::parse(arg);

    // load & bind script
    loadScript();
    // call script notifications...
    //script_onLoaded( down_cast<simulation::Node>(getContext()) );
    //script_createGraph( down_cast<simulation::Node>(getContext()) );
}

ScriptDataEngine::ScriptDataEngine() : DataEngine()
{
    f_listening = true;
}

ScriptDataEngine::~ScriptDataEngine()
{

}

void ScriptDataEngine::update()
{
    // DataEngine::update(); doesn't make sense, probably?
    script_update();
}

void ScriptDataEngine::init()
{

}

void ScriptDataEngine::reinit()
{
}

void ScriptDataEngine::handleEvent(core::objectmodel::Event *event)
{
}

} // sofa
} // component
} // controller

