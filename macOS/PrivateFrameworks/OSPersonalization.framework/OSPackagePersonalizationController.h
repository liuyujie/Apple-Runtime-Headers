//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSPackagePersonalizationController : NSObject
{
}

+ (id)sharedController;
- (BOOL)_extractFirmwareBundleComponentFromPackage:(id)arg1 toDestination:(id)arg2;
- (id)_recommendedFirmwareBundleComponentInSpecifiers:(id)arg1;
- (void)personalizePackageSpecifiersForInstall:(id)arg1 outputDirectory:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)personalizationRequiredForPackageSpecifiers:(id)arg1;

@end
