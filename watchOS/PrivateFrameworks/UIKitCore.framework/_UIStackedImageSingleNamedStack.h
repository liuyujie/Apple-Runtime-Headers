//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINamedLayerStack.h"

@class NSArray, NSString, _UIStackedImageSingleNamedLayerImage;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack>
{
    _UIStackedImageSingleNamedLayerImage *_layerImage;
}

@property(retain, nonatomic) _UIStackedImageSingleNamedLayerImage *layerImage; // @synthesize layerImage=_layerImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) float scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

