//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosEditUI/PUEditPluginSession.h>

@interface PUImageEditPluginSession : PUEditPluginSession
{
    _Bool _allowLivePhotoExtensions;
}

@property(nonatomic) _Bool allowLivePhotoExtensions; // @synthesize allowLivePhotoExtensions=_allowLivePhotoExtensions;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (void)shouldLaunchPlugin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageDataSource;
- (unsigned long long)pluginManagerMediaType;

@end
