//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VUIImageLoadParams.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>
{
    NSString *_imageIdentifier;
    NSURL *_imageURL;
    NSString *_baseImageIdentifier;
    unsigned long long _imageType;
}

@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(copy, nonatomic) NSString *baseImageIdentifier; // @synthesize baseImageIdentifier=_baseImageIdentifier;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
- (id)init;
- (id)initWithImageURL:(id)arg1 baseImageIdentifier:(id)arg2 imageType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

