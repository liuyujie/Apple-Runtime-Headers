//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AMActionCompletionResults, AMConversion, NSError, NSString;

@protocol AMRemoteRunnerXPCDelegateProtocol
- (void)remoteWorkflowRunnerDidChangeState:(unsigned long long)arg1;
- (void)remoteWorkflowRunnerDidRunConversion:(AMConversion *)arg1 uuid:(NSString *)arg2;
- (void)remoteWorkflowRunnerWillRunConversion:(AMConversion *)arg1 uuid:(NSString *)arg2;
- (void)remoteWorkflowRunnerDidLogMessage:(NSString *)arg1 ofType:(unsigned long long)arg2 fromActionAtIndex:(unsigned long long)arg3;
- (void)remoteWorkflowRunnerDidResumeWithActionAtIndex:(unsigned long long)arg1;
- (void)remoteWorkflowRunnerDidPause;
- (void)remoteWorkflowRunnerWillPause;
- (void)remoteWorkflowRunnerWillStop;
- (void)remoteWorkflowRunnerDidError:(NSError *)arg1;
- (void)remoteWorkflowRunnerDidStopWithActionAtIndex:(unsigned long long)arg1;
- (void)remoteWorkflowRunnerDidFinish;
- (void)remoteWorkflowRunnerDidRun;
- (void)remoteWorkflowRunnerDidRunActionAtIndex:(unsigned long long)arg1 withResults:(AMActionCompletionResults *)arg2;
- (void)remoteWorkflowRunnerProgressDidChange:(double)arg1 forActionAtIndex:(unsigned long long)arg2;
- (void)remoteWorkflowRunnerWillRunActionAtIndex:(unsigned long long)arg1;
- (void)remoteWorkflowRunnerWillRun;
@end
