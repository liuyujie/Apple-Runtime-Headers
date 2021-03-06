//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString, NSURL;

@interface MPStreamingDownloadSession : NSObject <NSCopying>
{
    _Bool _didStartLeaseSession;
    _Bool _iTunesStoreStream;
    _Bool _isHLSAsset;
    NSString *_assetFlavor;
    unsigned int _assetQuality;
    unsigned int _protectionType;
    NSDictionary *_purchaseBundle;
    NSDictionary *_responseAssetDictionary;
    NSURL *_sourceURL;
    NSURL *_streamingKeyServerURL;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_alternateSourceURL;
    NSURL *_alternateHLSPlaylistURL;
    NSURL *_alternateHLSKeyServerURL;
    NSURL *_alternateHLSKeyCertificateURL;
    unsigned long long _downloadToken;
}

@property(copy, nonatomic) NSURL *alternateHLSKeyCertificateURL; // @synthesize alternateHLSKeyCertificateURL=_alternateHLSKeyCertificateURL;
@property(copy, nonatomic) NSURL *alternateHLSKeyServerURL; // @synthesize alternateHLSKeyServerURL=_alternateHLSKeyServerURL;
@property(copy, nonatomic) NSURL *alternateHLSPlaylistURL; // @synthesize alternateHLSPlaylistURL=_alternateHLSPlaylistURL;
@property(copy, nonatomic) NSURL *alternateSourceURL; // @synthesize alternateSourceURL=_alternateSourceURL;
@property(copy, nonatomic) NSURL *streamingKeyCertificateURL; // @synthesize streamingKeyCertificateURL=_streamingKeyCertificateURL;
@property(copy, nonatomic) NSURL *streamingKeyServerURL; // @synthesize streamingKeyServerURL=_streamingKeyServerURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSDictionary *responseAssetDictionary; // @synthesize responseAssetDictionary=_responseAssetDictionary;
@property(copy, nonatomic) NSDictionary *purchaseBundle; // @synthesize purchaseBundle=_purchaseBundle;
@property(nonatomic) unsigned int protectionType; // @synthesize protectionType=_protectionType;
@property(nonatomic) _Bool isHLSAsset; // @synthesize isHLSAsset=_isHLSAsset;
@property(nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream; // @synthesize iTunesStoreStream=_iTunesStoreStream;
@property(nonatomic) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property(nonatomic) _Bool didStartLeaseSession; // @synthesize didStartLeaseSession=_didStartLeaseSession;
@property(nonatomic) unsigned int assetQuality; // @synthesize assetQuality=_assetQuality;
@property(copy, nonatomic) NSString *assetFlavor; // @synthesize assetFlavor=_assetFlavor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

