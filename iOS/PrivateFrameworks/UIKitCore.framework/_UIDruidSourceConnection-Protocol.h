//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, NSXPCListenerEndpoint, PBItemCollection, _DUITouchRoutingPolicy;

@protocol _UIDruidSourceConnection <NSObject>
@property(copy, nonatomic) CDUnknownBlockType dataTransferFinishedBlock;
@property(copy, nonatomic) CDUnknownBlockType dragCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType handOffCancelledItemsBlock;
@property(copy, nonatomic) CDUnknownBlockType canHandOffCancelledItemsBlock;
@property(copy, nonatomic) CDUnknownBlockType itemUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType itemDetailProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType itemImageProviderBlock;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)cancelDrag;
- (PBItemCollection *)addItems:(NSArray *)arg1 withOldItemCollection:(PBItemCollection *)arg2;
- (void)dragDidExitApp;
- (void)takeOperationMasksInsideApp:(unsigned long long)arg1 outsideApp:(unsigned long long)arg2 prefersFullSizePreview:(_Bool)arg3;
- (void)dirtyItems:(NSArray *)arg1;
- (void)beginDragWithTouches:(NSSet *)arg1 touchRoutingPolicy:(_DUITouchRoutingPolicy *)arg2 items:(NSArray *)arg3 sourceDataOwner:(long long)arg4 accessibilityEndpoint:(NSXPCListenerEndpoint *)arg5 centroid:(struct CGPoint)arg6 completion:(void (^)(unsigned int, PBItemCollection *))arg7;
@end

