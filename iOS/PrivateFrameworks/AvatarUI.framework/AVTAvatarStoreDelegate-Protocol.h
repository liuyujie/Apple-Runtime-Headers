//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AVTAvatarStoreDelegate <NSObject>

@optional
- (void)store:(id <AVTAvatarStoreInternal>)arg1 didCreateDuplicateAvatar:(id <AVTAvatarRecord>)arg2 forOriginal:(id <AVTAvatarRecord>)arg3 postCompletionHandler:(void (^)(void (^)(void)))arg4;
- (void)store:(id <AVTAvatarStoreInternal>)arg1 didDeleteAvatarWithIdentifier:(NSString *)arg2 postCompletionHandler:(void (^)(void (^)(void)))arg3;
- (void)store:(id <AVTAvatarStoreInternal>)arg1 didSaveAvatar:(id <AVTAvatarRecord>)arg2 postCompletionHandler:(void (^)(void (^)(void)))arg3;
@end

