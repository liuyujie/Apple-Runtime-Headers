//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NLCoachingProgressEventEvaluator : NSObject
{
}

+ (_Bool)_eventDidCrossScheduledThreshold:(id)arg1 withModel:(id)arg2 evaluationDelegate:(id)arg3;
+ (id)_nextFireDateForEvent:(id)arg1 model:(id)arg2;
+ (_Bool)anyEventsShouldFireForGoalProgress:(id)arg1 withModel:(id)arg2 evaluationDelegate:(id)arg3;
+ (id)evaluateEvents:(id)arg1 forScheduledDayProgress:(_Bool)arg2 goalProgress:(_Bool)arg3 withModel:(id)arg4 evaluationDelegate:(id)arg5;
+ (id)nextScheduledDatesByEventIdentifiersForEvents:(id)arg1 model:(id)arg2 evaluationDelegate:(id)arg3;

@end

