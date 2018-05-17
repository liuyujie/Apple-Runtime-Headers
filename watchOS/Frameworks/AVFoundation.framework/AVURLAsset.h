//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

#import "AVContentKeyRecipient.h"

@class AVAssetResourceLoader, AVURLAssetInternal, NSString, NSURL;

@interface AVURLAsset : AVAsset <AVContentKeyRecipient>
{
    AVURLAssetInternal *_URLAsset;
}

+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long *)arg2 error:(id *)arg3;
+ (id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1;
+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (_Bool)isPlayableExtendedMIMEType:(id)arg1;
+ (id)audiovisualMIMETypes;
+ (id)audiovisualTypes;
+ (id)_UTTypes;
+ (id)_fileUTTypes;
+ (id)_streamingUTTypes;
+ (id)_figMIMETypes;
+ (id)_figFileUTIs;
+ (id)_figHFSFileTypes;
+ (id)_figFilePathExtensions;
+ (id)_figFileMIMETypes;
+ (id)_figStreamingMIMETypes;
+ (id)_figStreamingUTIs;
+ (id)_avfValidationPlist;
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1;
+ (id)userInfoObjectForURLAsset:(id)arg1;
+ (void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2;
+ (id)instanceIdentifierMapTable;
- (unsigned int)referenceRestrictions;
- (id)lyrics;
- (void)cancelLoading;
- (id)creationOptions;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)_absoluteURL;
- (void)_tracksDidChange;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (Class)_classForAssetTracks;
- (Class)_classForFigAssetInspectorLoader;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)_assetInspector;
- (void)_setAssetInspectorLoader:(id)arg1;
- (id)_assetInspectorLoader;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (void)_ensureAssetDownloadCache;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)init;
- (id)assetCache;
- (id)_managedAssetCache;
- (_Bool)_shouldOptimizeAccessForLinearMoviePlayback;
- (id)SHA1Digest;
- (unsigned long long)downloadToken;
- (id)downloadDestinationURL;
- (id)originalNetworkContentURL;
- (id)resolvedURL;
- (id)_instanceIdentifier;
- (id)identifyingTag;
- (id)identifyingTagClass;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLPathComponentOnly;
- (_Bool)_hasResourceLoaderDelegate;
@property(readonly, nonatomic) AVAssetResourceLoader *resourceLoader;
- (void)_handleURLRequest:(id)arg1;
- (void)_setUserInfoObject:(id)arg1;
- (void)_removeUserInfoObject;
@property(readonly, nonatomic) _Bool mayRequireContentKeysForMediaDataProcessing;
- (id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2;

@end
