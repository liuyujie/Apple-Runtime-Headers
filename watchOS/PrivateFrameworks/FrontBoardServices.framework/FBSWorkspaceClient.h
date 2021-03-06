//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

#import "FBSSceneUpdater.h"

@class BSBasicServerClient, FBSProcessHandle, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FBSWorkspaceClient : BSBaseXPCClient <FBSSceneUpdater>
{
    BSBasicServerClient *_client;
    NSMutableArray *_queuedMessages;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSProcessHandle *_processHandle;
    _Bool _inTransaction;
    id <FBSWorkspaceClientDelegate> _delegate;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(readonly, nonatomic) __weak id <FBSWorkspaceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)queue_connectionWasInterrupted;
- (void)queue_handleMessage:(id)arg1;
- (id)_loggingProem;
- (void)_queue_handleSceneMessage:(id)arg1;
- (void)_queue_handleSceneActions:(id)arg1;
- (void)_queue_handleActions:(id)arg1;
- (void)_queue_handleDestroyScene:(id)arg1;
- (void)_queue_handleSceneUpdate:(id)arg1;
- (void)_queue_handleCreateScene:(id)arg1;
- (void)_queue_handleTransactionBookEnd;
- (void)_queue_ensureTransaction;
- (void)_queue_sendMessageReply:(id)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(int)arg1 withEvent:(id)arg2 withResponseEvent:(CDUnknownBlockType)arg3 ofType:(Class)arg4;
- (void)_queue_sendMessage:(int)arg1 withEvent:(id)arg2;
- (id)_queue_workspaceEventFromMessage:(id)arg1 ofType:(Class)arg2;
- (_Bool)queue_handleMessageWithType:(long long)arg1 message:(id)arg2 client:(id)arg3;
- (id)_handlerForSceneID:(id)arg1;
- (void)_debugLog:(id)arg1;
- (void)_sendMessage:(int)arg1 withEvent:(id)arg2;
- (void)_sendMessageReply:(id)arg1 withEvent:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didDetachLayer:(id)arg2;
- (void)scene:(id)arg1 didUpdateLayer:(id)arg2;
- (void)scene:(id)arg1 didAttachLayer:(id)arg2;
- (_Bool)willObserveLayersManually;
- (id)hostProcess;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (void)sendDestroySceneRequestEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendCreateSceneRequestEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

