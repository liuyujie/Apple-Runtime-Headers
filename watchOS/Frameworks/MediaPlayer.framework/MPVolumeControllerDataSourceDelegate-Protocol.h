//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MPVolumeControllerDataSourceDelegate <NSObject>
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeControlAvailability:(_Bool)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeAudioCategory:(NSString *)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeEUVolumeLimitEnforced:(_Bool)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeEUVolumeLimit:(float)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeLabel:(NSString *)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeWarning:(int)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeMuted:(_Bool)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolume:(float)arg2;
@end

