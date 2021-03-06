//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"
#import "NSSecureCoding.h"

@class AVAsset, AVURLAsset, LPVideoProperties, NSData, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding>
{
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    struct CGSize _intrinsicSize;
    AVURLAsset *_asset;
    id _mediaServicesResetNotificationHandler;
    LPVideoProperties *_properties;
    NSURL *_streamingURL;
    NSURL *_youTubeURL;
    NSString *_MIMEType;
    NSURL *_fileURL;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, retain, nonatomic) NSURL *youTubeURL; // @synthesize youTubeURL=_youTubeURL;
@property(readonly, retain, nonatomic) NSURL *streamingURL; // @synthesize streamingURL=_streamingURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVAsset *_asset;
@property(readonly, nonatomic) struct CGSize _intrinsicSize;
- (_Bool)_shouldEncodeData;
- (void)_mapDataFromFileURL;
@property(readonly, copy, nonatomic) LPVideoProperties *properties;
@property(readonly, nonatomic) _Bool hasAudio;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) unsigned long _encodedSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithYouTubeURL:(id)arg1 properties:(id)arg2;
- (id)initWithYouTubeURL:(id)arg1;
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;
- (id)initWithStreamingURL:(id)arg1 hasAudio:(_Bool)arg2;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(_Bool)arg3;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(_Bool)arg3;
- (id)_initWithVideo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

