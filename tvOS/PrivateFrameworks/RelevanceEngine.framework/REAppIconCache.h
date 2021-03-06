//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSCache, NSObject<OS_dispatch_queue>;

@interface REAppIconCache : RESingleton
{
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_loadIconForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadRemoteIconForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)iconForApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

