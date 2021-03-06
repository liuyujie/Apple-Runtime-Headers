//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNObservable, CNUIImage, CNUILikenessRenderingScope, NSArray;

@protocol CNUILikenessRendering <NSObject>
+ (id <CNKeyDescriptor>)descriptorForRequiredKeys;
- (CNUIImage *)loadingPlaceholderForContactCount:(unsigned int)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedBasicMonogramFromString:(CNObservable *)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedLikenessesForContacts:(NSArray *)arg1 scope:(CNUILikenessRenderingScope *)arg2;
@end

