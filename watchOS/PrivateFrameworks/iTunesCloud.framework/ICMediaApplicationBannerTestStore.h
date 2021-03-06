//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesCloud/ICMediaApplicationBannerStore.h>

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ICMediaApplicationBannerTestStore : ICMediaApplicationBannerStore
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_bannerCache;
    NSMutableDictionary *_propertyCache;
}

- (void).cxx_destruct;
- (_Bool)removeAllBannersWithResult:(id *)arg1;
- (id)bannersForBundleIdentifier:(id)arg1 target:(id)arg2 error:(id *)arg3;
- (id)allBannersWithResult:(id *)arg1;
- (_Bool)removeBannerWithGUID:(id)arg1 error:(id *)arg2;
- (_Bool)addBanner:(id)arg1 error:(id *)arg2;
- (id)bannerStorePropertyForKey:(id)arg1;
- (_Bool)setBannerStoreProperty:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

