//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLCloudSharedAlbum, PLCloudSharedComment, PLManagedAsset;

@protocol PXCloudFeedNavigating <NSObject>
- (_Bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(PLCloudSharedAlbum *)arg1;
- (_Bool)cloudFeedCommentIsAvailableForNavigation:(PLCloudSharedComment *)arg1;
- (_Bool)cloudFeedAssetIsAvailableForNavigation:(PLManagedAsset *)arg1;
@end
