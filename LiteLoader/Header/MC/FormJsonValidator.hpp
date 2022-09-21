// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonValidator.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FormJsonValidator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FORMJSONVALIDATOR
public:
    class FormJsonValidator& operator=(class FormJsonValidator const &) = delete;
    FormJsonValidator(class FormJsonValidator const &) = delete;
    FormJsonValidator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FORMJSONVALIDATOR
#endif
    MCAPI static class JsonValidator::Property getContentItemProperty(class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &);
    MCAPI static class JsonValidator::Property getControlLockedProperty();
    MCAPI static class JsonValidator::Property getDropdownProperty(bool);
    MCAPI static class JsonValidator::Property getSliderProperty(bool);
    MCAPI static class JsonValidator::Property getStepSliderProperty(bool);
    MCAPI static class JsonValidator::Property getTextInputProperty(bool);
    MCAPI static class JsonValidator::Property getToggleProperty(bool);

};