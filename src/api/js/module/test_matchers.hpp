#include <JavaScriptCore/JavaScript.h>

namespace testMatchers {
    JSValueRef toEqualCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObject, size_t argumentCount,
                                 const JSValueRef arguments[], JSValueRef *exception); 
}