//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INImageLoading.h"
#import "INImageStoring.h"

@class NSCache, NSString, NSXPCConnection;

@interface INImageServiceConnection : NSObject <INImageLoading, INImageStoring>
{
    NSXPCConnection *_connection;
    NSCache *_localStorageCache;
}

+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeImage:(id)arg1 scaled:(_Bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)canStoreImage:(id)arg1;
- (id)loadSchemasForBundleIdentifiers:(id)arg1 error:(id *)arg2;
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(CDStruct_8caa76fc)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)canLoadImageDataForImage:(id)arg1;
@property(readonly, nonatomic) unsigned int servicePriority;
@property(readonly, nonatomic) NSString *serviceIdentifier;
- (id)_localStorageCache;
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)loadDataImageFromImage:(id)arg1 scaledSize:(CDStruct_8caa76fc)arg2 error:(id *)arg3;
- (void)loadImageDataAndSizeForImage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

