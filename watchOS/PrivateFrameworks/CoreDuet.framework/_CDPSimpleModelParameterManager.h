//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDSocialInteractionAdvisorTuningDelegate.h"

@class NSString, _CDPModelTuningState, _CDPSimpleModelParameterManagerAccountState;

@interface _CDPSimpleModelParameterManager : NSObject <_CDSocialInteractionAdvisorTuningDelegate>
{
    _CDPSimpleModelParameterManagerAccountState *_accountState;
    NSString *_accountStateKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _CDPModelTuningState *lastTuningState;
- (void)saveAccountState;
- (void)loadAccountState;
- (void)modelTunerWillStop:(id)arg1;
- (void)modelTunerWillResume:(id)arg1;
- (void)getLambda:(float *)arg1 w0:(float *)arg2 threshold:(float *)arg3;
- (void)modelTuner:(id)arg1 heartBeatWithlambda:(float)arg2 w0:(float)arg3 threshold:(float)arg4 score:(float)arg5 progress:(float)arg6;
- (id)accountIdentifierForSettings:(id)arg1;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

