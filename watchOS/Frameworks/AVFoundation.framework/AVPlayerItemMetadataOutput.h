//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemMetadataOutputInternal, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput
{
    AVPlayerItemMetadataOutputInternal *_metadataOutputInternal;
}

+ (void)initialize;
@property(nonatomic) double advanceIntervalForDelegateInvocation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <AVPlayerItemMetadataOutputPushDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_detachFromPlayerItem;
- (_Bool)_attachToPlayerItem:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)initWithIdentifiers:(id)arg1;
- (id)init;
- (void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2;
@property(readonly, nonatomic, getter=_figMetadataOutputsDictionaryOptions) NSDictionary *figMetadataOutputsDictionaryOptions;
- (void)_signalFlush;

@end

