//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IKCSSDeclarationList, IKCSSMediaQuery, IKCSSSelectorList;

@interface IKCSSRule : NSObject <NSCopying>
{
    IKCSSSelectorList *_selectorList;
    IKCSSDeclarationList *_declarationList;
}

@property(retain, nonatomic) IKCSSDeclarationList *declarationList; // @synthesize declarationList=_declarationList;
@property(retain, nonatomic) IKCSSSelectorList *selectorList; // @synthesize selectorList=_selectorList;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) IKCSSMediaQuery *mediaQuery;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
