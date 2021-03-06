//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryAvailabilityObserver.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL, PHPhotoLibrary;

@interface VCPPhotoLibraryManager : NSObject <PHPhotoLibraryAvailabilityObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_systemPhotoLibraryURL;
    PHPhotoLibrary *_systemPhotoLibrary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (void)closeSystemPhotoLibrary;
- (id)systemPhotoLibrary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

