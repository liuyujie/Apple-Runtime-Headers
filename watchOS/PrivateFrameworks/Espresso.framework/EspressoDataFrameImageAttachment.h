//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment
{
    struct vImage_Buffer buffer;
    int _nChannels;
}

+ (struct __CVBuffer *)createCVPixelBufferFromvImage:(struct vImage_Buffer)arg1 withPixelFormat:(unsigned long)arg2;
@property int nChannels; // @synthesize nChannels=_nChannels;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;
- (struct vImage_Buffer)copyAsImageGrayscaleOrBGRA;

@end

