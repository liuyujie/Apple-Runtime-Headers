//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVImageDecorator : NSObject
{
}

- (_Bool)isEqual:(id)arg1;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSString *decoratorIdentifier;
@property(readonly, nonatomic) struct CGSize expectedSize;
@property(readonly, nonatomic) _Bool loaderCropToFit;
@property(readonly, nonatomic) struct CGSize loaderScaleToSize;

@end
