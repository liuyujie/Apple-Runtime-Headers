//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICApplicationSceneClientAgent.h"

@interface CUISWatchKitApplicationSceneClientAgent : PUICApplicationSceneClientAgent
{
    _Bool _hasReceivedNonClockKitEvent;
    id <CUISWatchActionHandler> _actionHandler;
}

@property(nonatomic) _Bool hasReceivedNonClockKitEvent; // @synthesize hasReceivedNonClockKitEvent=_hasReceivedNonClockKitEvent;
@property(nonatomic) __weak id <CUISWatchActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)inspectClockKitContextForEvent:(id)arg1;
- (id)sceneCreateActionByRemovingFromSceneEvent:(id)arg1;
- (id)watchActionsFromActions:(id)arg1;
- (id)watchActionsFromEventRemovingActions:(id)arg1;
- (void)handleWatchActions:(id)arg1 forEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 inspectEvent:(id)arg2 watchActions:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

