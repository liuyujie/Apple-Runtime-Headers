//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMUtilities : NSObject
{
}

+ (BOOL)isCertificateTrustValid:(struct __SecTrust *)arg1;
+ (BOOL)isSetupServiceHost:(id)arg1;
+ (void)postCDPRepairFollowUp;
+ (BOOL)isAppleIDLoginEnabled:(id)arg1;
+ (BOOL)isGuestUser;
+ (BOOL)screenLockIsEnabled;
+ (id)deviceUDID;
+ (int)openItemWithURL:(id)arg1;
+ (int)openApplicationWithURL:(struct __CFURL *)arg1;
+ (int)openApplicationWithBundleID:(id)arg1;
+ (void)openUsersAndGroupsPref;
+ (void)openiCloudPref;
+ (void)openParentalControlPref;
+ (void)openInternetAccountPref;
+ (void)openSecurityPref;
+ (void)openSharingPref;
+ (void)openEnergySaverPref;
+ (void)launchPhotosApplication;
+ (void)launchSoftwareUpdate;
+ (id)urlForBundleIdentifier:(id)arg1;
+ (id)bundleVersion;
+ (id)bundleIdentifier;

@end

