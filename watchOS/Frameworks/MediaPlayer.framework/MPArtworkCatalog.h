//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSString;

@interface MPArtworkCatalog : NSObject
{
    struct CGSize _fittingSize;
    long long _modelRevisionID;
    _Bool _loadingRepresentation;
    float _destinationScale;
    NSString *_cacheIdentifier;
    id _requestingContext;
    id _destination;
    CDUnknownBlockType _configurationBlock;
    id _token;
    id <MPArtworkDataSource> _dataSource;
    unsigned int _renderHint;
}

+ (id)_artworkLoadQueue;
+ (id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2;
+ (void)setCachePurgesWhenEnteringBackground:(_Bool)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (void)setCacheLimit:(int)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3;
+ (id)staticArtworkCatalogWithImage:(id)arg1;
@property(nonatomic) unsigned int renderHint; // @synthesize renderHint=_renderHint;
@property(nonatomic) __weak id <MPArtworkDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id token; // @synthesize token=_token;
@property(getter=isLoadingRepresentation) _Bool loadingRepresentation; // @synthesize loadingRepresentation=_loadingRepresentation;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(nonatomic) __weak id destination; // @synthesize destination=_destination;
@property(nonatomic) __weak id requestingContext; // @synthesize requestingContext=_requestingContext;
@property(copy, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(nonatomic) float destinationScale; // @synthesize destinationScale=_destinationScale;
- (void).cxx_destruct;
- (void)_updateWithRepresentation:(id)arg1 isBestRepresentation:(_Bool)arg2 modelRevisionID:(long long)arg3;
- (void)_updateRepresentation;
- (void)_loadBestRepresentationIfNeeded;
@property(readonly, nonatomic) NSCache *cache;
- (void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2;
- (void)requestExportableArtworkPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestExportableArtworkURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestRadiosityImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestFocusRegionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestColorAnalysisWithAlgorithm:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)existingColorAnalysisWithAlgorithm:(int)arg1;
@property(readonly, nonatomic) id <MPArtworkDataSourceVisualIdenticality> visualIdenticalityIdentifier;
- (_Bool)isArtworkVisuallyIdenticalToCatalog:(id)arg1;
- (void)setDestination:(id)arg1 progressiveConfigurationBlock:(CDUnknownBlockType)arg2;
- (void)setDestination:(id)arg1 configurationBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasImageOnDisk;
- (id)bestImageFromDisk;
- (void)requestImageWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct CGSize scaledFittingSize;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)initWithToken:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) int MP_artworkType;

@end

