//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIViewPrintFormatter.h>

@class UIWebPaginationInfo, WebFrame;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter
{
    UIWebPaginationInfo *_paginationInfo;
    WebFrame *_frameToPrint;
}

@property(retain, nonatomic) WebFrame *frameToPrint; // @synthesize frameToPrint=_frameToPrint;
- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (long long)_recalcPageCount;
- (void)removeFromPrintPageRenderer;
- (id)_webDocumentView;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

