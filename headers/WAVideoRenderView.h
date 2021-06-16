//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface WAVideoRenderView : UIView
{
    struct iosgl_stream *stream;
    struct CGRect _lastBounds;
}

+ (Class)layerClass;
- (void)change_format:(id)arg1;
- (int)create_and_init_openGL_buffer;
- (void)deinit_gl;
- (void)ensureGLBufferResized:(int)arg1;
- (void)finish_render;
- (void)init_gl;
- (void)layoutSubviews;
- (void)render;
- (void)resizeGLBuffer;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updatedBoundsSize;

@end

