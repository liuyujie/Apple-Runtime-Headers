//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, NSArray;

@interface AVAssetExportSessionInternal : NSObject
{
    struct OpaqueFigAssetExportSession *figExportSession;
    AVAsset *asset;
    AVAudioMix *audioMix;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    AVVideoComposition *videoComposition;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    CDUnknownBlockType handler;
}

@end
