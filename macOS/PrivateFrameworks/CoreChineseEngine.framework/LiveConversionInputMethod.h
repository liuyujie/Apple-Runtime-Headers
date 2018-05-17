//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMKAbstractInputMethod.h"

#import "SessionMachineDataSource.h"

@class NSArray, NSMutableArray, NSString, SessionMachine, TIMecabraEnvironment;

@interface LiveConversionInputMethod : IMKAbstractInputMethod <SessionMachineDataSource>
{
    id <LiveConversionInputMethodDataSource> _dataSource;
    TIMecabraEnvironment *_mecabraEnvironment;
    NSArray *_states;
    SessionMachine *_stateMachine;
    NSMutableArray *_candidates;
}

@property(retain, nonatomic) NSMutableArray *candidates; // @synthesize candidates=_candidates;
@property(retain, nonatomic) SessionMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSArray *states; // @synthesize states=_states;
@property(retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // @synthesize mecabraEnvironment=_mecabraEnvironment;
@property(nonatomic) __weak id <LiveConversionInputMethodDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)candidatesForState:(Class)arg1;
- (unsigned long long)mecabraAnalysisOptionsForState:(Class)arg1;
- (id)mecabraEnvironmentForState:(Class)arg1;
- (id)outputTextDocumentForState:(Class)arg1;
- (void)commitComposition;
- (BOOL)handleKeyPress:(id)arg1 whileInKeyboardState:(id)arg2;
- (void)setEnvironment:(id)arg1 forStates:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
