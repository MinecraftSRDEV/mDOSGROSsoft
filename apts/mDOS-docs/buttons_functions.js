let gotop_button;

let target;
let scrollPos;

window.onscroll = function() {scrollFunction()};
            
function scrollFunction()
{
    if (document.documentElement.scrollTop > 20) {
        ID_gotop.style.display = "block";
    }
    else
    {
        ID_gotop.style.display = "none";
    }
}

function topFunction()
{
    document.body.scrollTop = 0;
    document.documentElement.scrollTop = 0;
}

function targetCal()
{
    target = document.getElementById("target");
}
function fn_scrollToSetup()
{
    targetCal();
    scrollPos = document.getElementById("setup");
    scrollPos = setup.offsetTop;
    scrollTo(0, scrollPos);
}
function fn_scrollToStartupMenu()
{
    targetCal();
    scrollPos = document.getElementById("startup_menu");
    scrollPos = startup_menu.offsetTop;
    scrollTo(0, scrollPos);
}
function fn_scrollToPasswordConversion()
{
    targetCal();
    scrollPos = document.getElementById("password_conversion");
    scrollPos = password_conversion.offsetTop;
    scrollTo(0, scrollPos);
}
function fn_scrollToCommandList()
{
    targetCal();
    scrollPos = document.getElementById("command_list");
    scrollPos = command_list.offsetTop;
    scrollTo(0, scrollPos);
}
function fn_scrollToCommandDescript()
{
    targetCal();
    scrollPos = document.getElementById("command_description");
    scrollPos = command_description.offsetTop;
    scrollTo(0, scrollPos);
}

function fn_scrollToUserCreation()
{
    targetCal();
    scrollPos = document.getElementById("command_description");
    scrollPos = command_description.offsetTop;
    scrollTo(0, scrollPos);
}
            