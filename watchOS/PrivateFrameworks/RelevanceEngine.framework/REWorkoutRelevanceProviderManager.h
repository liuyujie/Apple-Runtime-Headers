//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import "REPredictorObserver.h"

@class NSString;

@interface REWorkoutRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver>
{
    unsigned int _state;
}

+ (Class)_relevanceProviderClass;
+ (id)_features;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)predictorDidUpdate:(id)arg1;
- (void)_prepareForUpdate;
- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

