//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenshotServices/SSUIServiceRequest.h>

@class SSUIServiceOptions, UIImage;

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest
{
    UIImage *_image;
    SSUIServiceOptions *_options;
}

+ (id)entitlement;
@property(retain, nonatomic) SSUIServiceOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;

@end

