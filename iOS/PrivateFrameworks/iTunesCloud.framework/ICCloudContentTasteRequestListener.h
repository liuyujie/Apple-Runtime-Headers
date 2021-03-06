//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface ICCloudContentTasteRequestListener : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedCloudContentTasteRequestListener;
- (void).cxx_destruct;
- (void)_setupContentTasteServiceConnection;
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)_init;

@end

