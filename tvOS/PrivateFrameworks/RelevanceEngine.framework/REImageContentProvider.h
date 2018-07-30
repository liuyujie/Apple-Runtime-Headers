//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class REImage;

@interface REImageContentProvider : NSObject <NSCopying, NSCoding>
{
    REImage *_onePieceImage;
    REImage *_twoPieceForegroundImage;
    REImage *_twoPieceBackgroundImage;
}

+ (id)imageContentProviderWithOnePieceImage:(id)arg1 twoPieceForegroundImage:(id)arg2 twoPieceBackgroundImage:(id)arg3;
+ (id)imageContentProviderWithOnePieceImage:(id)arg1;
@property(readonly, nonatomic) REImage *twoPieceBackgroundImage; // @synthesize twoPieceBackgroundImage=_twoPieceBackgroundImage;
@property(readonly, nonatomic) REImage *twoPieceForegroundImage; // @synthesize twoPieceForegroundImage=_twoPieceForegroundImage;
@property(readonly, nonatomic) REImage *onePieceImage; // @synthesize onePieceImage=_onePieceImage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 foregroundImage:(id)arg2 backgroundImage:(id)arg3;

@end
