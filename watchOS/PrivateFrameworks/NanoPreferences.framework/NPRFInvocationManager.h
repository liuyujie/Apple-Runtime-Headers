//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation;

@interface NPRFInvocationManager : NSObject
{
    NSInvocation *_invocation;
}

+ (id)_methodReturnTypeAsStringForObjectInstance:(id)arg1 selector:(SEL)arg2;
+ (id)resultOfTarget:(id)arg1 selector:(SEL)arg2 arguments:(id)arg3;
+ (struct objc_method *)_methodWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)invocationManagerWithTarget:(id)arg1 selector:(SEL)arg2 arguments:(id)arg3;
@property(retain) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void).cxx_destruct;
- (id)_methodReturnTypeAsString;
- (id)_invokeMethodReturningNumber;
- (id)_invokeMethodReturningValue;
- (id)_invokeMethodReturningData;
- (id)_invokeMethodReturningObjectUnretained;
- (id)invokeSelectorAndReturnResult;
- (_Bool)methodReturnsPrimitiveNumberType;
- (_Bool)methodReturnsObject;
- (_Bool)methodReturnsTypeForEncoding:(const char *)arg1;
- (int)_numberOfArgumentsForSelector;
- (int)_safelySetArgumentsToNilStartingAtIndex:(int)arg1;
- (int)_safelySetArgumentsToArray:(id)arg1 startingAtIndex:(int)arg2;
- (id)initWithInvocation:(id)arg1;
@property(retain) id target;
@property SEL selector;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 arguments:(id)arg3;
- (id)init;

@end

