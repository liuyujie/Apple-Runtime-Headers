//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHImageRequestOptions;

@protocol PXUIImageProvider <NSObject>
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id <PXDisplayAsset>)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(PHImageRequestOptions *)arg4 resultHandler:(void (^)(UIImage *, NSDictionary *))arg5;
@end
