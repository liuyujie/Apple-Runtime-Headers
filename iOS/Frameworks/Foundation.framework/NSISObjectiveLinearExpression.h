//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSISEngine;

@interface NSISObjectiveLinearExpression : NSObject
{
    NSISEngine *_engine;
    struct __CFDictionary *_priorityMap;
    struct __CFArray *_variablesSortedByPriorityVectors;
    struct __CFData *_constant;
}

- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
- (void)removeVariable:(id)arg1;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3;
- (void)verifyInternalIntegrity;
- (void)leadingPriority:(double *)arg1 andValue:(double *)arg2 forVar:(CDStruct_fcd6c539)arg3;
- (_Bool)restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(CDStruct_fcd6c539 *)arg1;
- (void)replaceVar:(CDStruct_fcd6c539)arg1 withExpression:(CDStruct_9ac54d62 *)arg2 processVarNewToReceiver:(CDUnknownBlockType)arg3 processVarDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)replaceVar:(CDStruct_fcd6c539)arg1 withVarPlusDelta:(double)arg2 timesVar:(CDStruct_fcd6c539)arg3 processVarNewToReceiver:(CDUnknownBlockType)arg4 processVarDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)replaceVar:(CDStruct_fcd6c539)arg1 withVarPlusDelta:(double)arg2;
- (void)addExpression:(CDStruct_9ac54d62 *)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(CDUnknownBlockType)arg4 processVarDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)addVar:(CDStruct_fcd6c539)arg1 priority:(double)arg2 times:(double)arg3 processVarNewToReceiver:(CDUnknownBlockType)arg4 processVarDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)addVar:(CDStruct_fcd6c539)arg1 priority:(double)arg2 times:(double)arg3;
- (void)setPriorityVector:(struct __CFData *)arg1 forKnownAbsentVar:(CDStruct_fcd6c539)arg2;
- (void)removeVar:(CDStruct_fcd6c539)arg1;
- (int)valueRestrictionForVar:(CDStruct_fcd6c539)arg1;
- (struct __CFData *)priorityVectorForVar:(CDStruct_fcd6c539)arg1;
- (unsigned long long)variableCount;
- (void)enumerateVars:(CDUnknownBlockType)arg1;
- (_Bool)constantTermIsZero;
- (void)incrementConstantWithPriorityVector:(struct __CFData *)arg1 timesScalarCoefficient:(double)arg2;
- (void)incrementConstantWithPriority:(double)arg1 value:(double)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithLinearExpression:(CDStruct_9ac54d62 *)arg1 priority:(double)arg2 engine:(id)arg3;
- (id)initWithEngine:(id)arg1;
- (id)init;

@end

