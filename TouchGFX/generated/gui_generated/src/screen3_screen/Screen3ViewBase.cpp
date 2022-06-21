/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen3_screen/Screen3ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


Screen3ViewBase::Screen3ViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 320, 240);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box2.setPosition(17, 16, 290, 207);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    dynamicGraph.setScale(1);
    dynamicGraph.setPosition(17, 16, 290, 207);
    dynamicGraph.setGraphAreaMargin(0, 0, 0, 0);
    dynamicGraph.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph.setGraphRangeY(0, 100);

    dynamicGraphMajorXAxisLabel.setScale(1);
    dynamicGraphMajorXAxisLabel.setInterval(10);
    dynamicGraphMajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_SG43));
    dynamicGraphMajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(61, 153, 50));
    dynamicGraph.addBottomElement(dynamicGraphMajorXAxisLabel);

    Painter.setColor(touchgfx::Color::getColorFromRGB(33, 196, 22));
    .setPainter(Painter);
    .setLineWidth(5);
    dynamicGraph.addGraphElement();

    Painter.setColor(touchgfx::Color::getColorFromRGB(196, 22, 124));
    .setPainter(Painter);
    .setBaseline(0);
    dynamicGraph.addGraphElement();

    add(__background);
    add(box1);
    add(box2);
    add(dynamicGraph);
}

void Screen3ViewBase::setupScreen()
{

}
